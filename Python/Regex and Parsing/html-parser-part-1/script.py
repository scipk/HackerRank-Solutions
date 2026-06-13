# Enter your code here. Read input from STDIN. Print output to STDOUT
from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    def print_attrs(self, attrs):
        for [name,value] in attrs:
            print(f"-> {name} > {value if value is not None else 'None'}")

    def handle_starttag(self, tag, attrs):
        print("Start :", tag)
        self.print_attrs(attrs)

    def handle_startendtag(self, tag, attrs):
        print("Empty :", tag)
        self.print_attrs(attrs)

    def handle_endtag(self, tag):
        print("End   :", tag)

    def handle_comment(self, data):
        pass

num_lines = int(input())
html = '\n'.join(input() for _ in range(num_lines))

MyHTMLParser().feed(html)