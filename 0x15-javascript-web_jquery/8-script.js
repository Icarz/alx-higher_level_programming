// Use jQuery to fetch data from the API
$.get('https://swapi-api.alx-tools.com/api/films/?format=json', function (data) {
  // Extract the list of movies from the response
  const movies = data.results;

  // Iterate over each movie and append its title to UL#list_movies
  $.each(movies, function (index, movie) {
    $('#list_movies').append('<li>' + movie.title + '</li>');
  });
});
