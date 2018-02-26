/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Closest pair
*/
#include <stdio.h>
#include <math.h>
double closest_pair(double[], double, double);
double median(double[]);
double sample_points = {};
int size;
void main()
{
	double d = closest_pair(0, size);
	printf("\nClosest pair");
}

double closest_pair(double px[], py[])
{
	if(sizeof(px) == 1)
		return 0;
	if(sizeof(px) == 2)
		return distance(px[1], py[1]);
	
	for(i = 0; i < size; i++)
	{
		double median = median(sample_points, i, j), d1, d2, dmin, d;
		d1 = closest_pair(sample_points, i, median / 2);
		d2 = closest_pair(sample_points, ((median / 2) + 1), j);
		
		if((d1 >= d2) && (d1 >= dmin))
			d = d1;
		else if(d2 >= d1) && (d2 >= dmin))
			d = d2;
	}
	return d;
}

double distance(double x, double x1, double y, double y1)
{
	double d = sqrt(pow((x - x1), 2) - pow((y - y1), 2));
	return d;
}

double median(double sample_points[], double size)
{
	int i;
	double res, double sample_sorted = sort(sample_points);
	if((size % 2) == 0)
		res = sample_sorted[size / 2] + sample_sorted[(size / 2) + 1];
	else
		res = sample_sorted[size / 2];
	
	return res;
}
