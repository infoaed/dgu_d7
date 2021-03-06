<?php
/**
 * @file
 * dgu_app.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgu_app_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dgu_app_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dgu_app_image_default_styles() {
  $styles = array();

  // Exported image style: apps_thumbnail.
  $styles['apps_thumbnail'] = array(
    'label' => t('Apps Thumbnail'),
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dgu_app_node_info() {
  $items = array(
    'app' => array(
      'name' => t('App'),
      'base' => 'node_content',
      'description' => t('Create content to to showcase your application which uses publicly available government data.  When you submit an app, our moderators will review and publish your content.  You can link to your application.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Please submit examples of Internet-based applications that make use of publicly-available government data sources.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
