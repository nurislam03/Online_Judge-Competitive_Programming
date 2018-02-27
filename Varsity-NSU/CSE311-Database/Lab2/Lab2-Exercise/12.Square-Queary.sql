
// Area

SELECT (
    SELECT S.length
    FROM Square S
    WHERE S.Comment = 'A'
) * (
    SELECT S.length
    FROM Square S
    WHERE S.Comment = 'B'
) AS Area
