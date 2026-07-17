var constructRectangle = function(area) {

    let s = Math.floor(Math.sqrt(area));

    while (area % s !== 0) {
        s--;
    }

    return [Math.floor(area / s), s];
};