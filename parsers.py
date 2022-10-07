import markdown
from bs4 import BeautifulSoup


def parser_markdown(md):
    html = markdown.markdown(md)
    soup = BeautifulSoup(html, features='html.parser')
    return soup.get_text()
