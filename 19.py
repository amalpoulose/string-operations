#!/usr/bin/python2.7

def main():
    s=raw_input("sting : ")
    l1=s.split()
    l1.reverse()
    #or l1=l1[::-1]
    print " ".join(l1)
    
    
if __name__=="__main__":
    main()
