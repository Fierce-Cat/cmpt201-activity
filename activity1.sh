#! /bin/bash
# keep calling sleep() with some timeout vlue.
while [ 1 ]
val=5
do
  sleep $val
  echo 'done.'
done
