#include<stdio.h>
#include<pwd.h>
#include<shadow.h>
#include<string.h>
int main()
{
struct passwd *pwd;
printf("users&groups\t\t\tuid\t  gid\tuserINFO\t\t\tworkingDIR\t\tloginSHELL\n");
printf("*************************************************************************************************************************\n");
while ((pwd = getpwent()) != NULL)
	printf("%-23s%11ld%10ld\t%-25s\t%-17s\t%s\n", pwd->pw_name, (long) pwd->pw_uid,pwd->pw_gid,pwd->pw_gecos,pwd->pw_dir,pwd->pw_shell);
endpwent();
}
