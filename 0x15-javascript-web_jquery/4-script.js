// Use jQuery to add a click event listener to DIV#toggle_header
$('#toggle_header').click(function () {
  // Toggle between the 'red' and 'green' classes on the <header> element
  $('header').toggleClass('red green');
});
