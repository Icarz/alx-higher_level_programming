// Wait for the DOM to be fully loaded before executing the script
$(document).ready(function () {
  // Add a click event listener to INPUT#btn_translate
  $('#btn_translate').click(function () {
    // Get the language code from INPUT#language_code
    const languageCode = $('#language_code').val();

    // Fetch the translation of "Hello" from the API
    $.get(`https://www.fourtonfish.com/hellosalut/hello/?lang=${languageCode}`, function (data) {
      // Extract the translation from the response
      const helloTranslation = data.hello;

      // Display the translation in DIV#hello
      $('#hello').text(helloTranslation);
    });
  });
});
