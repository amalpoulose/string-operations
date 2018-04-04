#!/usr/bin/python2.7

def main():
    s=raw_input("sting : ")
    key=input("key :" )
    #print s
    lis=list(s)
    count=0
    for i in range(len(lis)):
        if not ((ord(lis[i])<65 or ord(lis[i])>90) and (ord(lis[i])<97 or ord(lis[i])>122)):
            count+=1
        if count==key:
            j=i+1
            if j<len(lis):
                while (ord(lis[j])<65 or ord(lis[j])>90) and (ord(lis[j])<97 or ord(lis[j])>122):
                    j+=1
                lis[i],lis[j]=lis[j],lis[i]
                key+=4
        
            
    print ''.join(lis)
    
if __name__=="__main__":
    main()
