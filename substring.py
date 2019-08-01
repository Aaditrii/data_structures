def print_lex_circ(str,l,x):
    lex_circ_strings=set();
    str=str+str;
    for i in range(l):
        lex_circ_strings.add(str[i:i+x])
    for i in lex_circ_strings:
        print(i,end='\n')
if __name__=='__main__':
    str="baaaa"
    x=4
    len_str=len(str)
    print_lex_circ(str,len_str,x)

   
