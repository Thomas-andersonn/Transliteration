from html.parser import HTMLParser
from urllib.request import urlopen  
from urllib import parse
import time
class MyParser(HTMLParser):
    def handle_starttag(self,tag,attrs):
        if tag=='a':
            for(key,value)in attrs:
                if key=='title':
                    self.links=self.links+[value]
        
    def getlink(self,url):
        self.links=[]
        self.data=[]
        response=urlopen(url)
        htmlByte=response.read()
        try:
            htmlString=htmlByte.decode('utf-8')
        except UnicodeDecodeError:
            return self.links         
        self.feed(htmlString)
        return self.links
def spider():
    url_list=[
    'http://dict.hinkhoj.com/hindi-words/listaa.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listbh.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listm.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listy.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listr.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listl.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listv.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listsh.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listssh.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/lists.php?page=1',
    'http://dict.hinkhoj.com/hindi-words/listh.php?page=1']
    max_list=[
    91,
    88,
    228,
    37,
    108,
    78,
    192,
    95,
    3,
    415,
    86]
    f=open('out.txt','br+')
    cou=0
    for tempi in url_list:
        temp=tempi
        print(tempi)
        maxpages=max_list[cou]
        while(maxpages>0):
            utemp=temp+'\n'
            utemp=utemp.encode('utf-8')
            f.write(utemp)
            #time.sleep(2)
            parser=MyParser()
            text=parser.getlink(temp)
            for i in text:
                x=i+'\n'
                x=x.encode('utf-8')
                f.write(x)
            lis=list(temp)
            ind=0
            while(lis[ind]!='='):
                ind+=1
            l=len(lis)
            ind+=1
            inde=ind;
            s=""
            while(ind<l):
                s+=lis[ind]
                ind+=1
            tem=int(s)+1
            del lis[inde:l]
            lis.append(str(tem))
            temp="".join(lis)
            maxpages-=1
            print(temp)
        cou+=1
    f.close();
