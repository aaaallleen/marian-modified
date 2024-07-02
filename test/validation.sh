#!/bin/bash

#spm_decode --model=/volume/training-data-aus-zh/sentence_piece/aus/aus.model --input_format=piece < /volume/training-data-aus-zh/train/valid/valid_trans.out  > /volume/training-data-aus-zh/train/valid/valid.out

spm_decode --model=/volume/training-data-aus-zh/marian/test/test.model --input_format=piece < $1  > /volume/training-data-aus-zh/marian/test/valid/valid.out

sacrebleu /volume/training-data-aus-zh/marian/test/valid.aus -i /volume/training-data-aus-zh/marian/test/valid/valid.out -m bleu -b -w 4 
