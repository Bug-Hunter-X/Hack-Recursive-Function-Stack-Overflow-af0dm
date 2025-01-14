function foo(x:int):int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main():void {
  echo foo(5);
}

This code will cause a stack overflow error for large values of x because the recursive calls to foo() will exceed the maximum recursion depth.  The problem is that the recursion doesn't have a base case that's reachable for all inputs.  While it correctly handles x=0, inputs like x=-1 will result in infinite recursion.