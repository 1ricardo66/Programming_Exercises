fat = function(x) {
    var total = 1;
    for (var i = x; i >= 1; i--) {
        total *= i;
    }
    return total;
};

module.exports = {
    fat,
}