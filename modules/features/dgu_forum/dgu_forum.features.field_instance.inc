<?php
/**
 * @file
 * dgu_forum.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dgu_forum_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-forum-body'.
  $field_instances['node-forum-body'] = array(
    'bundle' => 'forum',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_replies' => 0,
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'more_link' => 0,
          'more_text' => t("Read more"),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'summary_handler' => 'trim',
          'trim_length' => 250,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => t("Body"),
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-forum-field_comment'.
  $field_instances['node-forum-field_comment'] = array(
    'bundle' => 'forum',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'reply',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'reply_default',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comment',
    'label' => t("Comments"),
    'required' => 0,
    'settings' => array(
      'access' => -1,
      'allow_reply' => -1,
      'display' => -1,
      'form' => -1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'reply',
      'settings' => array(),
      'type' => 'reply',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-forum-taxonomy_forums'.
  $field_instances['node-forum-taxonomy_forums'] = array(
    'bundle' => 'forum',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_forums',
    'label' => t('Forums'),
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-forums-field_machine_name'.
  $field_instances['taxonomy_term-forums-field_machine_name'] = array(
    'bundle' => 'forums',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is a machine name to be used for forum categories in URLs.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_machine_name',
    'label' => 'machine_name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Comments');
  t('Forums');

  return $field_instances;
}
