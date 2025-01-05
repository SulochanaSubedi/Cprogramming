int main()
{
	char *ppp="programming language";
	char **p=&ppp;
	int pp;
	printf("\n%s AND %s", *p, ppp);
	pp=strlen(*p);
	printf("\n%4d\t%4d\t%4d\t%4d\t%4d\t", pp--, pp, ++pp, pp++, --pp);
	if(strcmp("abandon", "abandonmant")<=0)
	pp=10;
	printf("value of pp=%d", pp);
	return 0;
}
