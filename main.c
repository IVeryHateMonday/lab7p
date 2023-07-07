#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    double distance;

    // Зчитуємо координати та радіуси двох колів
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    // Обчислюємо відстань між центрами колів
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевіряємо різні випадки

    if (distance == 0 && r1 == r2) {
        // Кола ідентичні, є безліч точок перетину
        printf("-1\n");
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не перетинаються, немає точок перетину
        printf("0\n");
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються зовнішньо або внутрішньо, одна точка перетину
        printf("1\n");
    } else {
        // Кола перетинаються у двох точках
        printf("2\n");
    }

    return 0;
}
