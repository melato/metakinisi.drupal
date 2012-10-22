<?php

/**
 * @file
 * The configuration screen.
 * @return type 
 */

function metakinisi_admin_form() {
  $form = array();
  $form['metakinisi_map_dir'] = array(
    '#type' => 'textfield',
    '#title' => t('Map Directory'),
    '#default_value' => variable_get( 'metakinisi_map_host', '/var/opt/metakinisi/maps'),
    '#maxlength' => 60,
    '#description' => t('The Directory to store generated maps.  Should not be web-accessible.'),
    '#after_build' => array('metakinisi_check_directory'),
  );
  return system_settings_form($form);
}

function metakinisi_check_directory($form_element) {
  $value = $form_element['#value'];
  if ( ! is_dir( $value )) {
    $form_item = $form_element['#parents'][0];
    form_set_error($form_item, t('Directory does not exist: %value.', array('%value' => $value)));
  } 
  return $form_element;
}

