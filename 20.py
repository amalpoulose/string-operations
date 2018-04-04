#!/usr/bin/python2.7                                                                                                                                       
                                                                                                                                                           
                                                                                                                                                           
def main():                                                                                                                                                
        s=raw_input("string : ")                                                                                                                           
        rm=raw_input("word : ")                                                                                                                       
        rep=raw_input("replace word : ")                                                                                                                     
        l1=s.split()                                                                                                                                       
        try:                                                                                                                                               
                while True:                                                                                                                                
                        l1[l1.index(rm)]=rep                                                                                                               
        except ValueError:                                                                                                                                 
                pass                                                                                                                                       
        print " ".join(l1)                                                                                                                                 
                                                                                                                                                           
if __name__=="__main__":                                                                                                                                   
        main()  
