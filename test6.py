# Python 3.8
#  Need to have requests and BeatifulSoup packages installed to run the code
# THe resulting html file can be find in this project directory with name replacedFile.html
import requests
import re
from bs4 import BeautifulSoup

page = requests.get('http://www.sap.com/belgique/index.html')

soup = BeautifulSoup(page.content, features='lxml')

for sap in soup.body.find_all(string=re.compile("SAP")):
  changed_content = sap.replace('SAP', 'Odoo')
  sap.string.replace_with(changed_content)

with open('odoo.html', 'w') as file:
  file.write(str(soup))
