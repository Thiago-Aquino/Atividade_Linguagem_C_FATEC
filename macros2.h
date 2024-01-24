/* macros */

#define eh_minuscula(c) ((c)>=65&&(c)<=90?1:0) 
#define eh_maiuscula(c) ((c)>=97&&(c)<=122?1:0)
#define minuscula(c) (eh_minuscula(c)?97+(c)-65:(c))
#define maiuscula(c) (eh_maiuscula(c)?65+(c)-97:(c))
