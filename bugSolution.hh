function foo(x:int):int {
  if (x < 0) {
    throw new Exception("Input must be non-negative");
  } else if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main():void {
  try {
    echo foo(5);
    echo foo(-1); // this will trigger the exception
  } catch (Exception e) {
    echo e->getMessage();
  }
}
