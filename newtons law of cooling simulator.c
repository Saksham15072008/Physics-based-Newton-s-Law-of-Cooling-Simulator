#include <stdio.h>

int main()
{
    double K, T1, Ts, t, T2;
    int choice;

    printf("\t\t --------NEWTONS LAW OF COOLING SIMULATOR--------- \n \n");

    printf("Select the case for K (all values in s^-1):\n");
    printf("1. Iron rod plunged in chilled water   : K = 0.30000000\n");
    printf("2. Hot cup of coffee/tea in a room     : K = 0.00043333 to 0.00083333 (using 0.00063333)\n");
    printf("3. Boiling water cooling in a room     : K = 0.00078333\n");
    printf("4. Forensic Science (Human Body)       : K = 0.00002778 to 0.00004167 (using 0.00003472)\n");
    printf("5. Enter K manually (in s^-1)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            K = 0.30000000;
            break;
        case 2:
            K = 0.00063333;
            break;
        case 3:
            K = 0.00078333;
            break;
        case 4:
            K = 0.00003472;
            break;
        case 5:
            printf("Enter K (in s^-1): ");
            scanf("%lf", &K);
            break;
    }

    printf("\nValue of K used = %.8f s^-1\n\n", K);

    printf("Enter initial temperature T1 (in degree celcius): ");
    scanf("%lf", &T1);
    printf("Enter surrounding temperature Ts(in degree celcius): ");
    scanf("%lf", &Ts);
    printf("Enter time t (in seconds): ");
    scanf("%lf", &t);

    /* from (T1 - T2)/t = K * ((T1 + T2)/2 - Ts), solved for T2 */
    T2 = (T1 * (1 - K * t / 2) + K * t * Ts) / (1 + K * t / 2);

    printf("\nTemperature after %.2f seconds = %.4f degree celcius\n", t, T2);

    printf("\nEstimated formula used:\n");
    printf("(T1 - T2) / t = K * ((T1 + T2)/2 - Ts)\n");

    printf("\nTrue formula:\n");
    printf("T(t) = Ts + (T1 - Ts) * e^(-K*t)\n");

    return 0;
}
