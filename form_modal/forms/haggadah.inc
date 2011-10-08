<?php

function haggadah_form(&$form_state) {
  module_load_include('inc', 'haggadah', 'haggadah.function');
  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );
  
  $form['default_template'] = array(
    '#type' => 'radios',
    '#options' => _get_template_for_user(),
    '#default_value' => 0,
    '#title' => t('Select a starting point of your Haggadah.')
  );
    
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add'),
  );
  return $form;
}
 
function haggadah_form_submit($form, $form_state) {
}