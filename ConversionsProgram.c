#include<stdio.h>
int main()
{
    char input;
    float KmsToMiles=0.621371;
    float InchesToFoot=0.0833333;
    float CmsToInches=0.393701;
    float PoundToKgs=0.453592;
    float InchesToMeters=0.0254;
    float first, second;
    while (1)
    {
    printf("Enter the type of conversion:\n Q to quit.\n 1. Kms To miles\n 2. Inches To Foot\n 3. Cms To Inches\n 4. Pound To Kgs\n 5. Inches To Meters\n");
    scanf("%c", &input);
    switch (input)
    {
    case 'q':
    printf("Quitting the program...\n");
        goto end;
        break;

        case '1':
        printf("Enter the character in terms of first units:\n");
        scanf("%f", &first);
        second = first * KmsToMiles;
        printf("%f kms is equal to %f miles.\n", first, second);
        break;

        case '2':
        printf("Enter the character in terms of first units:\n");
        scanf("%f", &first);
        second = first * InchesToFoot;
        printf("%f inches is equal to %f foots.\n", first, second);
        break;

        case '3':
        printf("Enter the character in terms of first units:\n");
        scanf("%f", &first);
        second = first * CmsToInches;
        printf("%f Cms is equal to %f Inches.\n", first, second);
        break;

        case '4':
        printf("Enter the character in terms of first units:\n");
        scanf("%f", &first);
        second = first * PoundToKgs;
        printf("%f pounds is equal to %f kgs.\n", first, second);
        break;

        case '5':
        printf("Enter the character in terms of first units:\n");
        scanf("%f", &first);
        second = first * InchesToMeters;
        printf("%f inches is equal to %f meters.\n", first, second);
        break;

        

    
    default:
    printf("Error: You typed invalid number.\n");
        break;
    }
    end:
    return 0;
}
}
