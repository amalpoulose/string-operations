#!/usr/bin/python2.7

def main():
    s1=raw_input("sting : ")
    s2=''.join([i for i in s1]) //copy sting to another buffer
    print "\n s1 = ",s1
    print "s2 = ",s2
    
if __name__=="__main__":
    main()
