#!/usr/bin/python2.7

def main():
    s=raw_input("string ")
    dic = {}
    for ch in s:
        if dic.has_key(ch): #or if ch in dic.keys():
            dic[ch]+=1
        else:
            dic[ch]=1
    for ch in dic.keys():
        if dic[ch] > 1:
            print ch," ---> ",dic[ch]
    
if __name__=="__main__":
    main()
