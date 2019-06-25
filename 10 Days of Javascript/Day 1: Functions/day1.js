
/*
 * Create the function factorial here
 */
function factorial(n) {
    let fact;
    
    if(n == 0) {
        return 1;
    }
    else {
        return (n * factorial(n - 1));
    }
}
