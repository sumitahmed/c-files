
    for (int i = n; i >= pos; i--) {
        array[i] = array[i - 1];
    }

    array[pos - 1] = newElement;

    printf("The updated array is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
