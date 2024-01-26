    #include<stdio.h>
  
area(float radius)
{
        float a = 3.14 * radius * radius;
    	return a;
}

float circum(float radius)
{ 
return 2*3.14*radius;
}
  int main() {
    	float radius;
    	printf("\nEnter the radius of Circle : ");
    	scanf("%d", &radius);
	printf("Area of circle : %f",a);
	circum(radius);
	printf("circumference of circle : %f",a);
	area();
    	return (0);
    }
