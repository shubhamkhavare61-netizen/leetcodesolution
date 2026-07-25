bool isNumber(char* s) {

    int count = 0;
    int count1= 0;
    if((*s=='+'||*s=='-')&&*(s+1)=='\0')
        {
            return false;
    }
    if (*s == '-' || *s == '+') {
        s++;
    }

    if (*s == 46) {
        if ((*(s + 1) == '\0'||*(s+1)==101||*(s+1)==69) && *s == 46) {
            return false;
        }
    }
    if(*s==101||*s==69)
    {
        return false;
    }
    while (*s!= '\0') 
    {

if ( (*s >= 48 && *s <= 57) || *s == 101 || *s == 69 || *s == 46)

        {

            if ((*s == 101 || *s == 69) && *(s + 1) == '\0') {
                return false;
            }

        if(((*(s+1)=='+'||*(s+1)=='-')&&(*s==101||*s==69)) )
             {
               s++;
             }
            // else
            //{
            //      return true;
            //    }
            if (*s == 101 || *s == 69) {
                count++;
            }

            if (*s == 46) {
                count1++;
            }
            if(count==1&& *s==46)
            {
            
                return false;
                }
            
            if (count == 2 || count1 == 2) {
                return false;
            }

        } 
        else 
        {

            return false;
        }
        if((*s=='+'||*s=='-')&&*(s+1)=='\0')
        {
            return false;
        }
        s++;
    }
    return true;
}
