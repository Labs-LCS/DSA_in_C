#include <stdio.h>

int main(void) {
	float unit_price;
	int item_number, y, m, d;
	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter a purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%.3d\t\t$%.2f\t\t%.2d/%.2d/%.4d\n", item_number, unit_price, m, d, y);
	return 0;
}
