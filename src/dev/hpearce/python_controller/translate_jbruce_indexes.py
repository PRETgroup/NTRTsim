cables = [
    [ 0,  4],
    [ 0,  5],
    [ 1,  6],
    [ 1,  7],
    [ 2,  4],
    [ 2,  5],
    [ 3,  6],
    [ 3,  7],
    [ 4,  8],
    [ 4,  9],
    [ 5, 10],
    [ 5, 11],
    [ 6,  8],
    [ 6,  9],
    [ 7, 10],
    [ 7, 11],
    [ 8,  0],
    [ 8,  1],
    [ 9,  2],
    [ 9,  3],
    [10,  0],
    [10,  1],
    [11,  2],
    [11,  3],
]

triangles = [
    [ 2, 9, 4], # Handedness -1. Prev ID 4
    [ 1, 7,10], # Handedness  1. Prev ID 0
    [ 6, 1, 8], # Handedness -1. Prev ID 1
    [ 2, 5,11], # Handedness  1. Prev ID 3
    [ 5, 0,10], # Handedness -1. Prev ID 5
    [ 3, 6, 9], # Handedness  1. Prev ID 7
    [11, 7, 3], # Handedness -1. Prev ID 6
    [ 8, 0, 4], # Handedness  1. Prev ID 2
]

triangle_index = 0
for triangle in triangles:
    print("Triangle %d:" % triangle_index)
    for i in range(3):
        source = triangle[i]
        dest = None
        if i + 1 >= len(triangle):
            dest = triangle[0]
        else:
            dest = triangle[i+1]
        cable_index = 1
        for cable in cables:
            if (cable[0] == source and cable[1] == dest) or (cable[0] == dest and cable[1] == source):
                print("\"m%02d\"," % cable_index)
                break
            cable_index += 1
    triangle_index += 1
