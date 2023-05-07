import os
import sys
import requests
from bs4 import BeautifulSoup
import colorama

tabs = []
tags = ['p', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'a', 'ul', 'li', 'head', 'title', "div"]
# write your code here
while True:
    text = input()
    dots = [pos for pos, char in enumerate(text) if char == '.']
    if len(dots) > 0:
        end_dot_index = dots[-1]
        filename = text[:end_dot_index]

    args = sys.argv
    directory = args[1]

    if not os.path.exists(directory):
        os.mkdir(directory)
    else:
        pass

    if text[:8].lower() != "https://" and text != "exit" and text != "back":
        text = "https://" + text

    if len(dots) == 0 and text != "back" and text != "exit":
        print("This URL contains an error")

    elif text == 'back':
        if len(tabs) > 1:
            tabs.pop()
            print(tabs.pop())
        else:
            print("Error: No websites visited")

    elif text == 'exit':
        break

    else:
        site = requests.get(text)
        soup = BeautifulSoup(site.text, 'html.parser')
        page = soup.find_all(tags)
        tabs.append(page)
        with open(directory + "/" + filename + ".txt", 'w') as f:
            for tag in page:
                if tag.string is None:
                    pass
                elif tag.name == "a":
                    print(colorama.Fore.BLUE + tag.string)
                    print(colorama.Style.RESET_ALL)
                    f.write(tag.string + '\n')
                else:
                    print(tag.string)
                    f.write(tag.string + '\n')