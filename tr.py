import asyncio
from pyppeteer import launch
from bs4 import BeautifulSoup


async def request(sourceLang, targetLang, sourceText):
    browser = await launch()
    page = await browser.newPage()
    await page.goto(f'https://www.deepl.com/translator#{sourceLang}/{targetLang}/{sourceText}', {'waitUntil' : ['load', 'domcontentloaded','networkidle0']})
    soup = BeautifulSoup(await page.content(), 'lxml')
    await page.screenshot({'path': "./test.png"})
    await browser.close()
    return soup.select('#target-dummydiv')[0].text

def tr(sourceLang, targetLang, sourceText):
    loop = asyncio.new_event_loop()
    asyncio.set_event_loop(loop)
    return loop.run_until_complete(request(sourceLang, targetLang, sourceText))
