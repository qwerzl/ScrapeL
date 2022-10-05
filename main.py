from tr import tr
import urllib.parse
import click
import sys

sys.tracebacklimit = 0


class CharactersLimitError(Exception):
    pass


@click.command()
@click.argument('source_language')
@click.argument('destination_language')
@click.argument('source_text')
def scrapeL(source_language, destination_language, source_text):
    if len(source_text) > 5000:
        raise CharactersLimitError("Character reaches a limit of 5000 words.")
    translatedText = tr(source_language, destination_language, urllib.parse.quote(source_text))
    while translatedText.isspace() or len(translatedText) == 0:
        translatedText = tr(source_language, destination_language, urllib.parse.quote(source_text))
    print(translatedText)


if __name__ == '__main__':
    scrapeL()
