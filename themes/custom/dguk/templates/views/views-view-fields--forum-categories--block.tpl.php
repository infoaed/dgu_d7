<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$new_topics = dgu_forum_topics_unread($row->tid);

?>
<div class="views-field views-field-name">
  <a href="<?php print url("forum/" . $row->field_field_machine_name[0]['raw']['value']); ?>">
  <?php print $row->taxonomy_term_data_name_i18n; ?>
  </a>
</div>
<?php if ($fields['description']->content): ?>
<div class="views-field views-field-description">
  <?php print $fields['description']->content; ?>
</div>
<?php endif; ?>
<div class="views-field views-field-stats forum-category-stats">
    <span><?php print html_entity_decode($fields['nid']->content); ?></span>
  <?php if ($new_topics): ?>
    <span class="new"><?php print format_plural($new_topics, '1 new', '@count new')?></span>
  <?php endif; ?>
  <?php if (isset($fields['id']->raw)): ?>
      <span><?php print html_entity_decode($fields['id']->content); ?></span>
      <?php $new_replies = dgu_forum_replies_unread($row->tid); ?>
      <?php if ($new_replies): ?>
        <span class="new"><?php print format_plural($new_replies, '1 new', '@count new')?></span>
      <?php endif; ?>
  <?php endif; ?>
</div>
