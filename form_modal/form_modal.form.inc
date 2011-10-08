<?php

function modal_form_custom() {
	$form = array();
	$form['title'] = array(
	 '#title' => 'title',
	 '#type' => 'textfield',
	 '#required' => TRUE
	);
	
	$form['submit'] = array(
	 '#type' => 'submit',
	 '#value' => 'Save',
	);
	
	return $form;
}

function modal_form_custom_submit() {
  print 'this works';
  die;
}
