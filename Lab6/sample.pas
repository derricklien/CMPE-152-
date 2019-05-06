PROGRAM sample;

VAR
    i, j : integer;
    alpha, beta5x : real;
    
BEGIN    
    IF i <= j THEN i := j;
    
    IF j > i THEN i := 3*j
    ELSE BEGIN
        alpha := 9;
        beta5x := alpha/3 - alpha*2;
    END
END.
