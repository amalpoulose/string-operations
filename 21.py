#!/usr/bin/python2.7

def spchr_rm(l):
    it=iter(l[:]) # to avoid shallow copy
    try:
        while True:
            temp=next(it)
            if not temp.isalpha():
                l.remove(temp)
    except StopIteration:
        pass
    l.sort()

def main():
    s1=raw_input("string 1 : ")
    s2=raw_input("string 2 : ")
    l1=list(s1)
    l2=list(s2)
    spchr_rm(l1)
    spchr_rm(l2)
    if l1==l2:
        print s1," and ",s2," are Anagram"  
    else:
        print s1," and ",s2," are not anagram"
    
if __name__=="__main__":
    main()
