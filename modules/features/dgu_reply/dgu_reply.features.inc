<?php
/**
 * @file
 * dgu_reply.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgu_reply_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_reply_bundle().
 */
function dgu_reply_default_reply_bundle() {
  $items = array();
  $items['comment'] = entity_import('reply_bundle', '{
    "bundle" : "comment",
    "name" : t('Comment'),
    "access" : "2",
    "display" : "2",
    "description" : "",
    "form" : "2",
    "allow_reply" : "1",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  $items['field_comment'] = entity_import('reply_bundle', '{
    "bundle" : "field_comment",
    "name" : t('Field comment'),
    "access" : "2",
    "display" : "2",
    "description" : t('Comments on fields used in consultation.'),
    "form" : "1",
    "allow_reply" : "1",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  $items['review_comment'] = entity_import('reply_bundle', '{
    "bundle" : "review_comment",
    "name" : t('Review comment'),
    "access" : "2",
    "display" : "1",
    "description" : t('Private comments on data requests used in dataset review workflow.'),
    "form" : "1",
    "allow_reply" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
