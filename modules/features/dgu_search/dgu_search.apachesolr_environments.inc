<?php
/**
 * @file
 * dgu_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function dgu_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/dgu_drupal';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_multilingual_index_settings' => array(
      'apachesolr_multilingual_index' => 1,
      'apachesolr_multilingual_map_language_neutral' => 'mul',
      'apachesolr_multilingual_clir' => array(
        'apachesolr_multilingual_index_translations' => 1,
        'apachesolr_multilingual_index_unpublished_translations' => 1,
        'apachesolr_multilingual_index_term_translations' => 1,
      ),
    ),
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'app',
      1 => 'forum',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
