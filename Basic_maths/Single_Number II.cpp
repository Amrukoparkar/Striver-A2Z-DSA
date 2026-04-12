int elementThatAppearsOnce(vector<int> arr) {
    int result = 0;

    for (int i = 0; i < 32; i++) {
        int bitCount = 0;

        for (int num : arr) {
            if (num & (1 << i )) {
                bitCount++;
            }
        }

        if (bitCount % 3 != 0) {
            result |= (1 << i);
        }
    }

    return result;
}
