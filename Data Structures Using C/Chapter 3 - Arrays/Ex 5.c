int main() {
    int num, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    int dupe[num];
    int index[num];

    for (int i = 0; i < num; i++) {
            printf("\narr[%d] = ", i);
            scanf("%d", &arr[i]);

            for (int j = 0; j < num; j++){
                if (arr[i] == dupe[j]) {
                   index[count] = i;
                   count++;
                }
            }
            dupe[i] = arr[i];
    }

    if (!count)
        printf("No Duplicates Found");
    else {
        printf("Duplicate numbers found at locations ");
        for (int i = 0; i < count; i++)
            printf("%d, ", index[count]);
    }
    return 0;
}

