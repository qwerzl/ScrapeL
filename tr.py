import asyncio
from pyppeteer import launch
from bs4 import BeautifulSoup
import sys
import urllib.parse

async def request(sourceLang, targetLang, sourceText):
    browser = await launch()
    page = await browser.newPage()
    await page.goto(f'https://www.deepl.com/translator#{sourceLang}/{targetLang}/{sourceText}', {'waitUntil' : ['load', 'domcontentloaded','networkidle0']})

    soup = BeautifulSoup(await page.content(), 'lxml')
    await browser.close()
    return soup.select('#target-dummydiv')[0].text


def translate_simple(sourceLang, targetLang, sourceText):
    loop = asyncio.new_event_loop()
    asyncio.set_event_loop(loop)
    result = loop.run_until_complete(request(sourceLang, targetLang, sourceText))
    while result.isspace() or len(result) == 0:
        result = loop.run_until_complete(request(sourceLang, targetLang, sourceText))
    return result


def tr(source_language, destination_language, source_text, split_text=False):
    if len(source_text) == 0:
        return ''
    if len(source_text) > 5000 or split_text:
        paragraphs = source_text.split('\n')
        paragraphs = [i for i in paragraphs if i] # Remove empty strings
        for i in range(len(paragraphs)):
            if len(paragraphs[i]) > 5000:
                print('The text is too long. Try splitting it into smaller paragraphs.')
                sys.exit(1)
        translated_paragraphs = []
        for i in range(len(paragraphs)):
            print(f"\r>> Translating Paragraphs: \033[95m{i} of {len(paragraphs)}\033[0m", end='\r')
            translated_paragraphs.append(tr(source_language, destination_language, paragraphs[i]))
        translatedText = '\n'.join(translated_paragraphs)
    elif len(source_text) > 5000 and split_text == False:
        print('The text is too long. Try using the --split_text option.')
        sys.exit(1)
    else:
        translatedText = translate_simple(source_language, destination_language, urllib.parse.quote(source_text))

    return translatedText
