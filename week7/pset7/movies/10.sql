SELECT people.name FROM ratings
INNER JOIN directors
ON ratings.movie_id = directors.movie_id
INNER JOIN people
ON directors.person_id = people.id
WHERE ratings.rating >= 9.0;
