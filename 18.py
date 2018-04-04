#!/usr/bin/python2.7

def main():
    s=raw_input("sting : ")
    l1=s.split()
    count=0
    for items in l1:
        l1[count]=items[::-1]
        count+=1
    print " ".join(l1)
    
    
if __name__=="__main__":
    main()
