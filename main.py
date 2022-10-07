from tr import tr
import urllib.parse, urllib.request, urllib.error
import click
import sys
import docx2txt
from pathlib import Path
from parsers import *

sys.tracebacklimit = 0


class CharactersLimitError(Exception):
    pass


@click.command()
@click.argument('source_language')
@click.argument('destination_language')
@click.argument('source_text')
@click.option('--split_text', '-s', is_flag=True, help='Split text into paragraphs')
def scrapeL(source_language, destination_language, source_text, split_text=False):
    # Check if source_text is a file
    if Path(source_text).is_file() and source_text.endswith('.docx'):
        try:
            source_text = docx2txt.process(source_text)
        except:
            print("\033[91mError while processing docx file\033[0m")
            sys.exit(1)
    # Check if source_text is a URL
    elif urllib.parse.urlparse(source_text).scheme:
        try:
            source_text = urllib.request.urlopen(source_text).read().decode('utf-8')
        except urllib.error.URLError:
            print("\033[91mError while processing URL\033[0m")
            sys.exit(1)

    # Check if source_text is a text file
    elif Path(source_text).is_file() and source_text.endswith('.txt'):
        try:
            with open(source_text, 'r') as f:
                source_text = f.read()
        except:
            print("\033[91mError while processing text file\033[0m")
            sys.exit(1)

    # Check if source_file is a markdown file
    elif Path(source_text).is_file() and source_text.endswith('.md'):
        try:
            with open(source_text, 'r') as f:
                source_text = parser_markdown(f.read())
        except:
            print("\033[91mError while processing markdown file\033[0m")
            sys.exit(1)

    translatedText = tr(source_language, destination_language, source_text, split_text)

    print(translatedText)


if __name__ == '__main__':
    scrapeL()
