#include<acts.h>
typedef struct Module{
	int module_id;
	char module_name[50];
	int hrs;
} nodule;
struct course{
	int course id;
	char name[50];
	int no_std;
	module modules[3];
};
