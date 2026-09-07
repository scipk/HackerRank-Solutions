from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_comment(self, data):
        if data == '\n':
            return
        elif not "\n" in data:
            print(f">>> Single-line Comment\n{data}")
        else:
            print(f">>> Multi-line Comment\n{data}")

    def handle_data(self, data):
        if data.strip():
            print(f">>> Data\n{data}")


html = ""       
for i in range(int(input())):
    html += input().rstrip()
    html += '\n'
    
parser = MyHTMLParser()
parser.feed(html)
parser.close()