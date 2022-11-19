def maxTriangleArea(rectangle, coordinates, numberOfCoordinates):
 
    l1min = 10 ** 9
    l2min = 10 ** 9
    l1max = 10 ** -9
    l2max = 10 ** -9
    b1min = 10 ** 9
    b1max = 10 ** -9
    b2min = 10 ** 9
    b2max = 10 ** -9
 
    l1Ycoordinate = rectangle[0][1];
    l2Ycoordinate = rectangle[1][1];
 
    b1Xcoordinate = rectangle[0][0];
    b2Xcoordinate = rectangle[1][0];
 
    # Always consider side parallel
    # to x-axis as length and
    # side parallel to y-axis as breadth
    for i in range(numberOfCoordinates):
        coordinates[i][1];
 
        # coordinate on l1
        if (coordinates[i][1] == l1Ycoordinate) :
            l1min = min(l1min, coordinates[i][0]);
            l1max = max(l1max, coordinates[i][0]);
         
 
        # Coordinate on l2
        if (coordinates[i][1] == l2Ycoordinate):
            l2min = min(l2min, coordinates[i][0]);
            l2max = max(l2max, coordinates[i][0]);
 
 
        # Coordinate on b1
        if (coordinates[i][0] == b1Xcoordinate):
            b1min = min(b1min, coordinates[i][1]);
            b1max = max(b1max, coordinates[i][1]);
         
 
        # Coordinate on b2
        if (coordinates[i][0] == b2Xcoordinate):
            b2min = min(b2min, coordinates[i][1]);
            b2max = max(b2max, coordinates[i][1]);
         
 
    # Find maximum possible distance
    # on length
    maxOfLength = max(abs(l1max - l1min), abs(l2max - l2min));
 
    # Find maximum possible distance
    # on breadth
    maxofBreadth = max(abs(b1max - b1min), abs(b2max - b2min));
 
    # Calculate result base * height / 2
    result = max((maxofBreadth * (abs(rectangle[0][0] - rectangle[1][0]))),
            (maxOfLength * (abs(rectangle[0][1] - rectangle[1][1])))) / 2.0;
 
    # Print the result
    print(int(result))


 