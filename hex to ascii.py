#!/usr/bin/python2.7
import math

def main():
    p,temp=0,0
    string=''
    l=raw_input().strip().split()
    for i in l:
        p=len(i)-1
        for j in i:
            if j.isdigit():
                temp+=int(j)*16**p
            else:
                try:
                    assert j.upper()<="F"  # if you enter input as 4g it will raise exception 
                    temp+=(ord(j.upper())-55)*16**p
                except AssertionError:
                    print "Base Error"  # Error message the value exceed  eg: input is 4g 4n
            p-=1
        string+=chr(temp)
        temp=0
    print string

if __name__=="__main__":
    main()
        
        
            
